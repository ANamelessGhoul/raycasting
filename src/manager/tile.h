#ifndef RC_TILE_H
#define RC_TILE_H

#include <raylib.h>

#define TAM_TILE 50 //TODO: CHECK IT.

typedef enum TileType_t {
    TILE_FLOOR = 0,
    TILE_WALL
}TileType_t;

typedef struct Tile_t {
    Vector2 position;
    Vector2 size;
    TileType_t type;
    Color color;
}Tile_t;

Tile_t  initTile(Vector2 position, Vector2 size, TileType_t type);

#endif //RC_TILE_H
