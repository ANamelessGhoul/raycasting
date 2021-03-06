#include "tile.h"
#include <raylib.h>

//------------------------------------------------------------------------------------
// Private methods declaration.
//------------------------------------------------------------------------------------
static Color getColorTile(TileType_t type);

//------------------------------------------------------------------------------------
// Public methods implementation.
//------------------------------------------------------------------------------------
Tile_t  initTile(Vector2 position, Vector2 size, TileType_t type) {
    Tile_t tile = {0};
    tile.position = position;
    tile.size = size;
    tile.type = type;
    tile.color = getColorTile(type);
    return tile;
}

//------------------------------------------------------------------------------------
// Private methods implementation.
//------------------------------------------------------------------------------------
static Color getColorTile(TileType_t type) {
    switch (type) {
        case TILE_FLOOR:
            return GRAY;
            break;
        default:
            return DARKGRAY;
    }
}

