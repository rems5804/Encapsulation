#ifndef VECTOR2_H__
#define VECTOR2_H__

class Vector2 {
private:
    float x;
    float y;

public:
        Vector2();

        Vector2(float x, float y);

        float getX() const;
    float getY() const;

        void setX(float x);
    void setY(float y);
};

#endif 