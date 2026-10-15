# Stacker

[![Open in Mokxi](https://mokxi.com/badge/open-in-mokxi.svg)](https://mokxi.com/p/jxN25QyvqUOE8qc-)

A circuit and its code, made in [Mokxi](https://mokxi.com), the electronics simulator that runs in your browser.

## What is in here

- `Stacker_uno1/`: the sketch for `uno1`, ready for the Arduino IDE (open `Stacker_uno1/Stacker_uno1.ino`).
- `Stacker_sketch/`: the sketch, ready for the Arduino IDE (open `Stacker_sketch/Stacker_sketch.ino`).
- `diagram.mokxi.json`: the whole Mokxi project (parts, wires and code). Mokxi opens it as it is.
- `.vscode/`: settings, tasks and the recommended extension for VS Code.

## Open it in Mokxi

Press the badge above, or in the Mokxi editor choose **Export > Open from GitHub** and pick this repository.

## Work on it in VS Code

1. Open this folder in VS Code. It suggests the **Mokxi** extension; install it.
2. Run **Mokxi: Sign In** from the Command Palette (Ctrl+Shift+P, or Cmd+Shift+P on a Mac).
3. Edit the sketch, then run **Mokxi: Sync** to send it to Mokxi, or **Mokxi: Open in Mokxi** to see it run.

The tasks in `.vscode/tasks.json` (Terminal > Run Task) do the same from the terminal, and can compile with `arduino-cli` when you have it.

## From a terminal

```sh
npx @mokxi/cli login            # once
npx @mokxi/cli pull PROJECT_ID .  # get the latest from Mokxi (the id is in the project link)
npx @mokxi/cli push         # send your edits to Mokxi
npx @mokxi/cli run          # simulate it and print the serial output
```

Docs: https://mokxi.com/docs/editor/github-and-vs-code
