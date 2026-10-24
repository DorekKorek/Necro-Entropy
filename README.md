# Necro-Entropy

## About the Project
**Necro-Entropy** is a simple, experimental 2D game/simulation written in **C++** using **SDL2** and **SDL2_mixer**. 

This was my first graphical project outside of the terminal ("breaking out of the console"). I spent about 3 weeks building it as a learning project to get comfortable with C++ and basic multimedia programming. Even though it's written in C++, it mostly uses straightforward, C-style logic rather than heavy modern C++ features.

Right now, the project is in an **early build** state with some bloated/unused code and unfinished ideas (like a `monster` cell type or player weapons/shooting). I may refactor and clean it up in the future, but for now I'm uploading it as-is so I can move on to new projects.

## How It Works
Since SDL2 only provides low-level access to drawing pixels, handling keyboard input, and playing audio, all the logic and UI had to be built from scratch:

- **Conway's Game of Life & Double Grid:** 
  - The game runs on the classic Conway rules: a cell with `< 2` or `> 3` neighbors dies, `2` neighbors stays alive, and `3` neighbors spawns a new cell.
  - **Two-Grid System (`grid` & `nextGrid`):** Modifying the array in-place while checking neighbors completely broke the simulation. To fix this, the game reads states from the original `grid`, writes the results into a separate `nextGrid`, and swaps them at the end of the frame.
  - **Full-Array Iteration:** Every frame, nested `for` loops check the entire 2D array (plus an offset buffer for off-screen spawning). While checking only active regions would be more optimized, iterating over the whole grid made the logic much easier to manage.
- **Cell Types (`dead`, `alive`, `player`, `monster`):** The grid tracks different states via an `enum`. Touching an `alive` cell as the `player` (the green dot in the center) triggers a game over. The `monster` state is a leftover from planned mechanics.
- **Custom Pixel Graphics & End Screen (`endScreenFull`):**
  - All visuals—including the countdown timer, `quotes`, and patterns—are drawn manually using pixel/line rendering functions without any font libraries.
  - **Scrolling End Screen:** When the game ends (`renderEndScreen`), it clears the grid below the viewport and shifts the visible screen upward step-by-step until no live cells remain on screen (`countDots == 0`), before finally drawing **YOU DIED** or **YOU WON**.

## Tech Stack
- **Language:** C++
- **Libraries:** SDL2, SDL2_mixer
