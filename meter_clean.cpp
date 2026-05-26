#include <iostream>
#include <unistd.h>

void calculate_billing(double liters) {
    double rate_per_liter = 0.50; // 0.50 KES per liter
    double total_cost = liters * rate_per_liter;
    std::cout << "Current Usage: " << liters << " Liters | Total Billing: Kes " << total_cost << std::endl;
}

int main() {
    double total_liters = 0.0;
    std::cout << "[SYSTEM] Smart Water Meter Active. Normal Flow Mode..." << std::endl;
    
    for (int i = 0; i < 10; i++) {
        total_liters += 12.5; // Simulating continuous water flow
        calculate_billing(total_liters);
        sleep(1);
    }
    return 0;
}
