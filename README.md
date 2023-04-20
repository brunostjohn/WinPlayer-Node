# WinPlayer-Node

## What is this?

WinRT is a mess. I found this project and hope to use it to solve a few problems within my app. Turns out, it crashes when used in worker threads that overlap. I aim to fix this shortcoming and hope to keep maintining this in lieu of the original author's abscence.

## Usage

```js
const Player = require("winplayer-node");

let player;

async function onUpdate() {
  const update = await player.getUpdate();
  console.log(update);
}

player = new Player(onUpdate);
```

Consult the [type definitions file](index.d.ts) for all the available methods and return types.

## Mentions

Thank you Healbot for teaching me that C++ will ravage you if you don't mind yourself.
