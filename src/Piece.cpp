
#include "Piece.hpp"

Piece::Piece(PieceType piece_type) {
  this->piece_type = piece_type;
  this->texture = getTexture(PIECE_FILE_PATHS[piece_type]);
}

Piece::~Piece() {

}

Texture2D Piece::getTexture(const char *filePath) {
  Image img = LoadImage(filePath);
  Texture2D texture = LoadTextureFromImage(img);

  UnloadImage(img);
  return texture;
}

void Piece::draw(int x, int y, int width, int height) {
  DrawTexture(this->texture, width, height, white);
}
