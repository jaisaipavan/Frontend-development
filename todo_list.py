# Define the list to store tasks
tasks = []

# Function to add a task
def add_task(task):
    tasks.append({"task": task, "completed": False})
    print(f'Task "{task}" added!')

# Function to view tasks
def view_tasks():
    if not tasks:
        print("No tasks to show.")
    else:
        for idx, task in enumerate(tasks, start=1):
            status = "✔️" if task["completed"] else "❌"
            print(f"{idx}. {task['task']} - {status}")

# Function to mark a task as completez
def mark_task_complete(task_number):
    if 0 < task_number <= len(tasks):
        tasks[task_number - 1]["completed"] = True
        print(f'Task "{tasks[task_number - 1]["task"]}" marked as complete!')
    else:
        print("Invalid task number.")

# Function to delete a task
def delete_task(task_number):
    if 0 < task_number <= len(tasks):
        removed_task = tasks.pop(task_number - 1)
        print(f'Task "{removed_task["task"]}" deleted!')
    else:
        print("Invalid task number.")
def main():
    print("Welcome to the To-Do List App!")

    while True:
        print("\nMenu:")
        print("1. Add a task")
        print("2. View tasks")
        print("3. Mark a task as complete")
        print("4. Delete a task")
        print("5. Exit")
        
        try:
            choice = int(input("Enter your choice: "))
        except ValueError:
            print("Invalid input. Please enter a number between 1 and 5.")
            continue

        if choice == 1:
            task = input("Enter the task: ")
            add_task(task)
        elif choice == 2:
            view_tasks()
        elif choice == 3:
            try:
                task_number = int(input("Enter the task number to mark as complete: "))
                mark_task_complete(task_number)
            except ValueError:
                print("Invalid input. Please enter a valid task number.")
        elif choice == 4:
            try:
                task_number = int(input("Enter the task number to delete: "))
                delete_task(task_number)
            except ValueError:
                print("Invalid input. Please enter a valid task number.")
        elif choice == 5:
            print("Exiting the To-Do List App. Goodbye!")
            break
        else:
            print("Invalid choice. Please enter a number between 1 and 5.")

if __name__ == "__main__":
    main()
