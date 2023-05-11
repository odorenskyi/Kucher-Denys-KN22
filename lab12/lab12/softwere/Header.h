#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
// Створюємо інтерфейс Shape
class Shape {
public:
    virtual float getHeight() = 0; // повернення значень
    virtual float getWidth() = 0; // повернення значень

    virtual float getArea() = 0; // повернення площі
    virtual float getPerimeter() = 0; // периметра

    virtual void setHeight(float h) = 0; //встановлення нового значення висоти
    virtual void setWidth(float w) = 0; //встановлення нового значення довжини
};

// створюємо клас dectangle який реалізує інтерфейс Shape
class dectangle : public Shape {
private:
    float width;
    float height;
public:
    // конструктор
    dectangle(float w, float h) {
        width = w;
        height = h;
    }
    // метод зміни інтерфейсу getArea на повернення значення
    float getArea() override {
        return width*height;
    }
    // метод зміни інтерфейсу getPerimeter на повернення значення
    float getPerimeter() override {
        return 2*(width+height);
    }

    // повернення значень height та width
    float getHeight() override {
        return height;
    }
    float getWidth() override {
        return width;
    }

    // встановлення нових значень введених користувачем
    void setHeight(float h) {
        height = h;
    }

    void setWidth(float w) {
        width = w;
    }


};


#endif // HEADER_H_INCLUDED
