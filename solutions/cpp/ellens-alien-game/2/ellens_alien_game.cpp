namespace targets {

    class Alien{
    private:
        int health{3};
    
    public:
        int x_coordinate{0};
        int y_coordinate{0};
    
        Alien(int x, int y){
            x_coordinate = x;
            y_coordinate = y;
        };
    
        int get_health(){
            return health;
        };
    
        bool hit(){
            if (health > 0) health--;
            else health = 0;
            return true;
        };

        bool is_alive(){
            return health > 0;
        };

        bool teleport(int x, int y){
            x_coordinate = x;
            y_coordinate = y;
            return true;
        };

        bool collision_detection(Alien alien){
            return x_coordinate == alien.x_coordinate && y_coordinate == alien.y_coordinate;
        };
    };

}  // namespace targets
