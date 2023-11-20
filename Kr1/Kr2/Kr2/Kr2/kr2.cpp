#include <iostream>
#include <string>

using namespace std;
struct Gear {
public:
    Gear(int diameter, int numTeeth, string material)
        : diameter(diameter), numTeeth(numTeeth), material(material) {}

    int getDiameter() const { return diameter; }
    int getNumTeeth() const { return numTeeth; }
    string getMaterial() const { return material; }

    void install() {
        printf("���������� �����������\n");
    }

    void manufacture() {
        printf("���������� �����������\n");
    }



private:
    int diameter;
    int numTeeth;
    string material;
};

class Shaft {
public:
    Shaft(int length, int diameter, string material)
        : length(length), diameter(diameter), material(material) {}

    int getLength() const { return length; }
    int getDiameter() const { return diameter; }
    string getMaterial() const { return material; }

    void assemble() {
        cout << "��� ������\n";
    }

    void balance() {
        cout << "�������������� ���\n";
    }

    void heatTreat() {
        cout << "��� ��������\n";
    }

private:
    int length;
    int diameter;
    string material;
};

class Housing {
public:
    Housing(string material, double dimensions[3], bool waterproof)
        : material(material), waterproof(waterproof) {
        for (int i = 0; i < 3; i++) {
            this->dimensions[i] = dimensions[i];
        }
    }

    string getMaterial() const { return material; }
    bool isWaterproof() const { return waterproof; }

    void cast() {
        cout << "������ �����\n";
    }

    void mill() {
        cout << "������ ������������\n";
    }

    void assembleComponents() {
        cout << "������ ������\n";
    }

private:
    string material;
    double dimensions[3];
    bool waterproof;
};

class Motor {
public:
    Motor(string type, double power, int voltage)
        : type(type), power(power), voltage(voltage) {}

    string getType() const { return type; }
    double getPower() const { return power; }
    int getVoltage() const { return voltage; }

    void start() {
        cout << "����� �������\n";
    }

    void stop() {
        cout << "����� ����������\n";
    }

    void changeSpeed(int newSpeed) {
        cout << "�������� ��������\n";
    }

private:
    string type;
    double power;
    int voltage;
};

class Valve {
public:
    Valve(string material, double diameter, bool isPressureRelief)
        : material(material), diameter(diameter), isPressureRelief(isPressureRelief) {}

    std::string getMaterial() const { return material; }
    double getDiameter() const { return diameter; }
    bool isPressureReliefValve() const { return isPressureRelief; }

    void open() {
        cout << "������ ������\n";
    }

    void close() {
        cout << "������ ������\n";
    }

    void adjustPressure(double targetPressure) {
        cout << "�������� ��������\n";
    }

private:
    string material;
    double diameter;
    bool isPressureRelief;
};

int main() {
    setlocale(LC_ALL, "Ru");
    Gear gear1(20, 40, "�����");
    gear1.install();
    gear1.manufacture();

    Shaft shaft1(100, 10, "�����");
    shaft1.assemble();
    shaft1.balance();
    shaft1.heatTreat();

    double dimensions[3] = { 200.0, 150.0, 80.0 };
    Housing housing1("�����", dimensions, true);
    housing1.cast();
    housing1.mill();
    housing1.assembleComponents();

    Motor motor1("�������������", 5.0, 220);
    motor1.start();
    motor1.changeSpeed(1500);
    motor1.stop();

    Valve valve1("���������", 25.0, true);
    valve1.open();
    valve1.adjustPressure(10.0);
    valve1.close();

    string text = "      jgjjgh    ";
    printf("%s" , text.c_str());

    return 0;
}