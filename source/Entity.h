#pragma once
class Entity
{
    public:
        float X = 0;
        float Y = 0;
        
        Entity(float x, float y);

        void Move(float xa, float ya);
};