
#include "main.hpp"

int main(void) {
  InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Raylib");
  SetTargetFPS(60);

  Board board;

  bool is_running = true;
  while (WindowShouldClose() == false && is_running) {
    if (IsKeyPressed(KEY_ENTER)) {
      is_running = false;
    }

    if (IsKeyDown(KEY_W)) {
      std::cout << "Hello" << std::endl;
    }
    if (IsKeyDown(KEY_S)) {
    }
    if (IsKeyDown(KEY_A)) {
    }
    if (IsKeyDown(KEY_D)) {
    }

    // Game Logic

    // Start Drawing
    BeginDrawing();
    ClearBackground(aqua);

    board.draw();

    EndDrawing();
  }

  CloseWindow();
  return 0;
}

