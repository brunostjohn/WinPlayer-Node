const Player = require(".");

/** @type {import(".").Player} */
let player;

async function onUpdate() {
  const update = await player.getUpdate();
  console.log(update);
}

player = new Player(onUpdate);
console.log(player.GetPosition());
