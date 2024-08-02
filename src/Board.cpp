
#include "Board.hpp"

Board::Board() {
  for (int i = 0; i < BOARD_ROWS; i++) {
    for (int j = 0; j < BOARD_COLS; j++) {
      PieceType piece_type = STARTING_BOARD[i][j];
      if (piece_type != EMPTY) {
        this->cells[i][j] = new Piece(piece_type);
      }
      else {
        this->cells[i][j] = nullptr;
      }
    }
  }
}

Board::~Board() {
  for (int i = 0; i < BOARD_ROWS; i++) {
    for (int j = 0; j < BOARD_COLS; j++) {
      if (this->cells[i][j]) {
        delete this->cells[i][j];
      }
    }
  }
}

void Board::draw() {
  // Draw Board
  DrawRectangle(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT, dark_green);
  for (int i = 0; i < BOARD_ROWS; i++) {
    for (int j = 0; j < BOARD_COLS; j++) {
      if ((i + j) % 2 == 0) {
        DrawRectangle(i * tile_size, j * tile_size, tile_size, tile_size, beige);
      }
    }
  }

  // Draw Pieces
  for (int i = 0; i < BOARD_ROWS; i++) {
    for (int j = 0; j < BOARD_COLS; j++) {
      Piece *piece = this->cells[i][j];
      if (piece) {
        piece->draw(j * tile_size, i * tile_size);
      }
    }
  }
}
