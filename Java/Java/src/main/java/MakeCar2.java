public class MakeCar2 {
    int numPassenger;
    int maxSpeed;
    String gearType;
    String fuelType;


    void print(String maker, String brand, int seat, int speed, String gear, String fuel) {
        System.out.print("Car2 Maker = " + maker + "\n");
        System.out.print("Car2 Brand = " + brand + "\n");
        System.out.print("Number of Seat = " + seat + "\n");
        System.out.print("Max speed = " + speed + " Km/h\n");
        System.out.print("Gear Type = " + gear + "\n");
        System.out.print("Fuel Type = " + fuel + "\n" + "\n");
    }


    public static void main(String[] args) {

        MakeCar2 M2 = new MakeCar2();

        { //Sedan
            Sedan C = new Sedan();
            C.setMaker("HYUNDAI");
            C.setBrand("GENESIS");

            Car2 c2 = new Car2();
            c2.setNumSeat(5);
            c2.setMaxSpeed(240);
            c2.setGearType("Automatic");
            c2.setFuelType("Gasoline");

            M2.print(C.getMaker(), C.getBrand(), c2.getNumSeat(), c2.getMaxSpeed(), c2.getGearType(), c2.getFuelType());
        }

        { //Bus
            Bus C = new Bus();
            C.setMaker("DAEWOO");
            C.setBrand("GRANDBIRD");

            Car2 c2 = new Car2();
            c2.setNumSeat(45);
            c2.setMaxSpeed(160);
            c2.setGearType("Manual");
            c2.setFuelType("Natural Gas");

            M2.print(C.getMaker(), C.getBrand(), c2.getNumSeat(), c2.getMaxSpeed(), c2.getGearType(), c2.getFuelType());
        }

        { //Truck
            Truck C = new Truck();
            C.setMaker("VOLVO");
            C.setBrand("VOLVO FL");

            Car2 c2 = new Car2();
            c2.setNumSeat(2);
            c2.setMaxSpeed(180);
            c2.setGearType("Manual");
            c2.setFuelType("Diesel");

            M2.print(C.getMaker(), C.getBrand(), c2.getNumSeat(), c2.getMaxSpeed(), c2.getGearType(), c2.getFuelType());
        }
    }
}






