import java.util.HashMap;
import java.util.Map;

class Node {
    int key;
    int val;
    Node prev;
    Node next;

    public Node(int key, int val) {
        this.key = key;
        this.val = val;
    }
}

class LRUCache {
    private final int cap;
    private final Map<Integer, Node> cache; // key -> node, for fast lookup

    // Dummy nodes at both ends. List looks like:
    // oldest <-> (least recent) ... (most recent) <-> latest
    private final Node oldest;
    private final Node latest;

    public LRUCache(int capacity) {
        this.cap = capacity;
        this.cache = new HashMap<>();
        this.oldest = new Node(0, 0);
        this.latest = new Node(0, 0);
        oldest.next = latest;
        latest.prev = oldest;
    }

    public int get(int key) {
        if (!cache.containsKey(key)) {
            return -1;
        }
        Node node = cache.get(key);
        remove(node);  // move it to the most recent spot
        insert(node);
        return node.val;
    }

    public void put(int key, int value) {
        // Key exists: update value and mark as most recent
        if (cache.containsKey(key)) {
            Node node = cache.get(key);
            node.val = value;
            remove(node);
            insert(node);
            return;
        }

        // New key: add it
        Node newNode = new Node(key, value);
        cache.put(key, newNode);
        insert(newNode);

        // Too many items: remove the least recent one
        if (cache.size() > cap) {
            Node lru = oldest.next;
            remove(lru);
            cache.remove(lru.key);
        }
    }

    // Take a node out of the list
    private void remove(Node node) {
        node.prev.next = node.next;
        node.next.prev = node.prev;
    }

    // Put a node at the most recent spot (just before "latest")
    private void insert(Node node) {
        Node prev = latest.prev;
        prev.next = node;
        node.prev = prev;
        node.next = latest;
        latest.prev = node;
    }
}