#ifndef RC_PLAYER_H
#define RC_PLAYER_H

#include <raylib.h>
#include <stdint.h>

typedef struct Player_t {
    Vector2 position;
    Vector2 velocity;
    float   angle;
    float   angleVel;
} Player_t;

Player_t    *initPlayer(Vector2 position);
void        freePlayer(Player_t ** ptrPlayer);

#endif //RC_PLAYER_H