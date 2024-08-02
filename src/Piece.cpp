
#include "Piece.hpp"

Piece::Piece(PieceType piece_type) {
  this->piece_type = piece_type;
  this->texture = getTexture(PIECE_FILE_PATHS[piece_type]);
}

Piece::~Piece() {

}

Texture2D Piece::getTexture(const char *filePath) {
  Image img = LoadImage(filePath);
  ImageResize(&img, tile_size, tile_size);
  Texture2D texture = LoadTextureFromImage(img);

  UnloadImage(img);
  return texture;
}

void Piece::draw(int x, int y) {
  DrawTexture(this->texture, x, y, white);
}
