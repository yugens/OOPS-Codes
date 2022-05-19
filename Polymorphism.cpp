abstract class Animal {
    abstract void speak();
}

class Dog extends Animal {
    @Override
    void speak() {
        System.out.println("Woof");
    }
}

class Cat extends Animal {
    @Override
    void speak() {
        System.out.println("Meow");
    }
}

class AnimalService {
    public void speak() {
        Animal animalObj = new Animal();
        animalObj.speak();
    }
}
