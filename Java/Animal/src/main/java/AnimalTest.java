abstract class Animal {
    String animal_name;
    Animal(String name){
        animal_name = name;
    }
    public abstract void cry();
    public abstract void behavior();
}

class Tiger extends Animal{

    public Tiger(String name){
        super(name);
    }
    public void cry(){
        System.out.println("어흥");
        //System.out.println("growl");
    }

    public void behavior(){

        System.out.println("우측으로 빠르게 움직인다.");
        //System.out.println("move fast right side.");
    }

}
class Dog extends Animal {

    public Dog(String name) {
        super(name);
    }

    public void cry() {
        System.out.println("멍멍");
        //System.out.println("wub woof wolf");
    }

    public void behavior() {
        System.out.println("왼쪽으로 느리게 달린다");
        //System.out.println("run slow to the left");
    }
}

public class AnimalTest {
    public static void main(String[] args){
        Tiger tiger = new Tiger("Hodol");
        tiger.cry();
        tiger.behavior();
        System.out.println("호랑이의 이름은 :"+tiger.animal_name);
        //System.out.println("Tiger's name is :"+tiger.animal_name);

        Dog dog = new Dog("Mikey");
        dog.cry();
        dog.behavior();
        System.out.println("개의 이름은 :"+dog.animal_name);
        //System.out.println("Dog's name is :"+dog.animal_name);

    }
}
