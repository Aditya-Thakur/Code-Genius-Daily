let todoItems = ["Find Socks", "Get Dressed", "Bring Flowers"];
let doneItems = ["Buy Mangoes", "Buy Litchi"];
refresh();

function addTask(){
    let task = document.getElementById("taskInput");
    todoItems.push(task.value);
    task.value = "";
    refresh();
}

function refresh() {
    let todoElement = document.getElementById("todoItem");
    todoElement.innerHTML = "";
    // for (let i = 0; i < todoItem.length; i++) {
    //     const element = todoItem[i];
    //     todoElement.innerHTML += "<li>" + element + "</li>";
    // }
    todoItems.forEach( (todoItem, index) => {
        todoElement.innerHTML += `<li title="Click to move to done" class="item" onclick="moveToDone(${index})" >` + todoItem + "</li>";
    });

    let doneElement = document.getElementById("doneItem");
    doneElement.innerHTML = "";

    doneItems.forEach((doneItem, index) => {
        doneElement.innerHTML += `<li title="Click to move to do" class="item" onclick="moveToDo(${index})">` + doneItem + "</li>";
    });
}

function moveToDo(id) {
    let newList = [];
    doneItems.forEach( (doneItem, index) => {
        if(index != id) {
            newList.push(doneItem);
        } else {
            todoItems.push(doneItem);
        }
    });
    doneItems = newList;
    refresh();
}

function moveToDone(id) {
    let newList = [];
    todoItems.forEach( (todoItem, index) => {
        if(index != id) {
            newList.push(todoItem);
        } else {
            doneItems.push(todoItem);
        }
    });
    todoItems = newList;
    refresh();
}