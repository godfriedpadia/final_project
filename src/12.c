// Function to generate a random number between 1 and 100
int randomNumber() {
    int num;
    // Use a modulo operator to generate a random number between 1 and 100
    num = (rand() % 100) + 1;
    return num;
}
