#include <stdio.h>

int main() {
    // Desired angle (target)
    double desired_angle = 90.0;   // degrees

    // Current robot state
    double theta = 0.0;            // current angle
    double angular_velocity = 0.0;

    // Controller parameters
    double K = 0.5;                // proportional gain
    double dt = 0.1;               // timestep (seconds)

    // Simulation duration
    double total_time = 10.0;

    printf("Time\tAngle\tVelocity\tError\n");

    for(double t = 0; t <= total_time; t += dt) {

        // Feedback error
        double error = desired_angle - theta;

        // Proportional controller
        angular_velocity = K * error;

        // Integrator (plant dynamics)
        theta += angular_velocity * dt;

        printf("%.1f\t%.2f\t%.2f\t\t%.2f\n",
               t,
               theta,
               angular_velocity,
               error);
    }

    return 0;
}