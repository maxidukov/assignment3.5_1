#include <iostream>

class Base {
  int sides;
  std::string name;
  public:
  Base(int sides = 0){
    this->sides = sides;
    set_name("Фигура");
  }
  void check_sides(int req_sides){
    if(get_sides()!=req_sides){
       std::cout<<"Число сторон в фигуре \""<<name<<"\" должно равняться "<<req_sides<<"\n";
       std::cout<<"\t Число сторон исправлено на "<<req_sides<<"\n";
       set_sides(req_sides);
    }
  }
  int get_sides(){
    return sides;
  }
  std::string get_name(){
    return name;
  }
  void set_sides(int sides){
    this->sides = sides;
  }
  void set_name(std::string name){
    this->name = name;
  }
  void show_info(){
    std::cout<<get_name()<<": "
            <<get_sides()<<"\n";
  }
};

class Triangle : public Base{
  public:
  Triangle():Base(3){
    set_name("Треугольник");
    check_sides(3);
  }
};

class Quadrangle : public Base{
  public:
  Quadrangle():Base(4){
    set_name("Четырехугольник");
    check_sides(4);
  }
};

int main() {
  Base figure;
  Triangle ABC;
  Quadrangle ABCD;
  std::cout<<"Количество сторон:\n";
  figure.show_info();
  ABC.show_info();
  ABCD.show_info();

  //std::cout << "Hello World!\n";
  return 0;
}
