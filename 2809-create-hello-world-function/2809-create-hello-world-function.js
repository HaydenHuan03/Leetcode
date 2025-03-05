/**
 * @return {Function}
 */
var createHelloWorld = function() {
    let greeting = "Hello World"
    return function(...args) {
        return greeting
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */