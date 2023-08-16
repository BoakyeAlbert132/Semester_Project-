#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>


using namespace std;

enum TrafficLightState {
    RED,
    GREEN,
    YELLOW,
};

class TrafficLight {
private:
    TrafficLightState state;

public:
    TrafficLight() {
        state = RED;
    }

    void changeState(TrafficLightState newState) {
        state = newState;
    }

    TrafficLightState getState() {
        return state;
    }

};


int main() {
    TrafficLight trafficLight;
    
    srand(time(0));

    while (true) {
        switch (trafficLight.getState()) {
        	
            case RED:
            	
           	
            
             
                cout << "[O]         RED LIGHT - STOP!" << endl; 
                cout << " |"<<endl;
           
                sleep(10);
                
                cout<<endl;
                trafficLight.changeState(YELLOW);
                break;
            case YELLOW:
            	
                
                cout << "[O]         YELLOW LIGHT - PREPARE TO GO!" << endl;
                cout << " |"<<endl;
                sleep(10);
                cout<<endl;
                trafficLight.changeState(GREEN);
                break;
            case GREEN:
            
                cout << "[O]         GREEN LIGHT - GO!" << endl;
                cout << " |"<<endl;
                sleep(20);
                
                cout<<endl;
                trafficLight.changeState(RED);
                break;
        }

     
    }

    return 0;
}
