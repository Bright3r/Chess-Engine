
#include "main.hpp"

int main(void) {
  InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Raylib");
  SetTargetFPS(60);

  Piece white_knight(KNIGHT_WHITE);

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

    drawBoard();
    white_knight.draw(100, 100, 100, 100);

    EndDrawing();
  }

  CloseWindow();
  return 0;
}


void drawBoard() {
  DrawRectangle(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT, white);
  for (int i = 0; i < BOARD_ROWS; i++) {
    for (int j = 0; j < BOARD_COLS; j++) {
      if ((i + j) % 2 == 0) {
        DrawRectangle(i * tile_size, j * tile_size, tile_size, tile_size, black);
      }
    }
  }
}

