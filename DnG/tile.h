#ifndef TILE_H_
#define TILE_H_
#include <SiroGen/entity.h>

class Tile :
    public Entity
{
public:
    Tile();
    virtual void update(float deltaTime);
};

#endif
