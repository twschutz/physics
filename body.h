using namespace std;

class Body {
    private:
        double xpos;
        double ypos;

        double mass;
        double inertia;

        double vel_x;
        double vel_y;
        double vel;

        double force;
        double torque;

        double coef_friction;
};