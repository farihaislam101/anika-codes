
void search(string address) {
    Node* temp = current;

    while (temp != nullptr) {
        if (temp->address == address) {
            // এড্রেসটি পাওয়া গিয়ে তার মাধ্যমে সহী নোডে যাওয়া হয়েছে
            current = temp;
            cout << current->address << endl;
            return;
        }
        temp = temp->prev; // বামে যাওয়া হয়েছে
    }

    // এড্রেসটি পাওয়া যায়নি
    cout << "Not Available" << endl;
}

