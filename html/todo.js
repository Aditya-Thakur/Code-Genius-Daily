let todoItem = ["Find Socks", "Get Dressed", "Bring Flowers"];
let doneItem = [];
refresh();

function addTask(){
    let task = document.getElementById("taskInput");
    todoItem.push(task.value);
    refresh();
}

function refresh() {
    let todoElement = document.getElementById("todoItem");
    todoElement.innerHTML = "";
    for (let i = 0; i < todoItem.length; i++) {
        const element = todoItem[i];
        todoElement.innerHTML += "<li>" + element + "</li>";
    }
}