#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define Task class
class Task {
private:
    string name;        // Task name
    string description; // Task description
    string dueDate;     // Task due date
    bool completed;     // Task completion status

public:
    // Constructor to initialize a task
    Task(const string& name, const string& description, const string& dueDate)
        : name(name), description(description), dueDate(dueDate), completed(false) {}

    // Getter for task name
    string getName() const { return name; }

    // Getter for task description
    string getDescription() const { return description; }

    // Getter for task due date
    string getDueDate() const { return dueDate; }

    // Getter for task completion status
    bool isCompleted() const { return completed; }

    // Mark the task as completed
    void markCompleted() { completed = true; }

    // Display task details
    void displayTask() const {
        cout << name << " (" << (completed ? "Completed" : "Pending") << ")\n";
        cout << "Description: " << description << "\n";
        cout << "Due Date: " << dueDate << "\n\n";
    }
};

// Define ToDoList class
class ToDoList {
private:
    vector<Task> tasks; // List of tasks

public:
    // Add a new task
    void addTask(const Task& task) {
        tasks.push_back(task);
        cout << "Task added successfully!\n";
    }

    // Display all tasks
    void viewTasks() const {
        if (tasks.empty()) {
            cout << "No tasks found.\n";
            return;
        }
        cout << "Tasks:\n";
        for (const Task& task : tasks) {
            task.displayTask();
        }
    }

    // Delete a task
    void deleteTask(int taskNumber) {
        if (taskNumber >= 0 && taskNumber < tasks.size()) {
            tasks.erase(tasks.begin() + taskNumber);
            cout << "Task deleted successfully!\n";
        } else {
            cout << "Invalid task number.\n";
        }
    }
};

int main() {
    ToDoList myToDoList;

    // Example usage:
    Task task1("Buy groceries", "Milk, eggs, bread", "2024-06-15");
    Task task2("Finish project", "Code review and documentation", "2024-06-20");

    myToDoList.addTask(task1);
    myToDoList.addTask(task2);

    myToDoList.viewTasks();

    // Delete task (e.g., task at index 0)
    myToDoList.deleteTask(0);

    return 0;
}
