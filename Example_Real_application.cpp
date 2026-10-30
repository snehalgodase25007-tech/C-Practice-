#include <iostream>
#include <string>
using namespace std;

struct Node {
    int roll;
    string name;
    float marks;
    Node *left, *right;

    Node(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
        left = right = NULL;
    }
};

// Insert student record into BST
Node* insert(Node* root, int r, string n, float m) {
    if (root == NULL)
        return new Node(r, n, m);

    if (r < root->roll)
        root->left = insert(root->left, r, n, m);
    else if (r > root->roll)
        root->right = insert(root->right, r, n, m);
    else
        cout << "Roll number already exists!\n";

    return root;
}

// Search for a student
Node* search(Node* root, int r) {
    if (root == NULL || root->roll == r)
        return root;

    if (r < root->roll)
        return search(root->left, r);

    return search(root->right, r);
}

// Display records in ascending order
void display(Node* root) {
    if (root == NULL)
        return;

    display(root->left);

    cout << "Roll No: " << root->roll
         << ", Name: " << root->name
         << ", Marks: " << root->marks << endl;

    display(root->right);
}

int main() {
    Node* root = NULL;
    int choice, roll;
    string name;
    float marks;

    do {
        cout << "\n1. Add Student";
        cout << "\n2. Search Student";
        cout << "\n3. Display All Students";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter roll number: ";
            cin >> roll;

            cout << "Enter student name: ";
            cin >> ws;
            getline(cin, name);

            cout << "Enter marks: ";
            cin >> marks;

            root = insert(root, roll, name, marks);
            break;

        case 2:
            cout << "Enter roll number to search: ";
            cin >> roll;

            {
                Node* result = search(root, roll);

                if (result != NULL) {
                    cout << "Student Found!\n";
                    cout << "Name: " << result->name
                         << "\nMarks: " << result->marks << endl;
                } else {
                    cout << "Student not found!\n";
                }
            }
            break;

        case 3:
            if (root == NULL)
                cout << "No student records available.\n";
            else
                display(root);
            break;

        case 4:
            cout << "Program ended.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
