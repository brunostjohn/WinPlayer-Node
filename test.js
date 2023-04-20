const { Worker } = require("worker_threads");

const thread1 = new Worker("./thread.js");
// on line 5 a race condition will occur, i aim to fix this bug
const thread2 = new Worker("./thread.js");
