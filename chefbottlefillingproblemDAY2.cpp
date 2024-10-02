int main() {
    int b1, b2, b3;

    cout << "Enter the state of bottles (0 for empty, 1 for filled): ";
    cin >> b1 >> b2 >> b3;

    int empty = 0;
    
    if (b1 == 0) empty++;
    if (b2 == 0) empty++;
    if (b3 == 0) empty++;

    if (empty >= 2) {
        cout << "water filling time" << '\n';
    } else {
        cout << "Not now" << '\n';
    }

    return 0;
}
