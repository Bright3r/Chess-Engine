#pragma once

#include <raylib.h>
#include <string>
#include <vector>
#include "Consts.hpp"

enum PieceType {
  PAWN_WHITE, ROOK_WHITE, KNIGHT_WHITE, BISHOP_WHITE, QUEEN_WHITE, KING_WHITE, 
  PAWN_BLACK, ROOK_BLACK, KNIGHT_BLACK, BISHOP_BLACK, QUEEN_BLACK, KING_BLACK
};

static const char* PIECE_FILE_PATHS[] = {
  "./assets/white-pawn.png",
  "./assets/white-rook.png",
  "./assets/white-knight.png",
  "./assets/white-bishop.png",
  "./assets/white-queen.png",
  "./assets/white-king.png",
  "./assets/black-pawn.png",
  "./assets/black-rook.png",
  "./assets/black-knight.png",
  "./assets/black-bishop.png",
  "./assets/black-queen.png",
  "./assets/black-king.png"
};

class Piece {
  public:
    PieceType piece_type;
    Texture2D texture;

    Piece(PieceType piece_type);
    ~Piece();
    void draw(int x, int y, int width, int height);

  private:
    Texture2D getTexture(const char *filePath);
};

