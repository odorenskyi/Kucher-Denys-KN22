#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
// ��������� ��������� Shape
class Shape {
public:
    virtual float getHeight() = 0; // ���������� �������
    virtual float getWidth() = 0; // ���������� �������

    virtual float getArea() = 0; // ���������� �����
    virtual float getPerimeter() = 0; // ���������

    virtual void setHeight(float h) = 0; //������������ ������ �������� ������
    virtual void setWidth(float w) = 0; //������������ ������ �������� �������
};

// ��������� ���� dectangle ���� ������ ��������� Shape
class dectangle : public Shape {
private:
    float width;
    float height;
public:
    // �����������
    dectangle(float w, float h) {
        width = w;
        height = h;
    }
    // ����� ���� ���������� getArea �� ���������� ��������
    float getArea() override {
        return width*height;
    }
    // ����� ���� ���������� getPerimeter �� ���������� ��������
    float getPerimeter() override {
        return 2*(width+height);
    }

    // ���������� ������� height �� width
    float getHeight() override {
        return height;
    }
    float getWidth() override {
        return width;
    }

    // ������������ ����� ������� �������� ������������
    void setHeight(float h) {
        height = h;
    }

    void setWidth(float w) {
        width = w;
    }


};


#endif // HEADER_H_INCLUDED
