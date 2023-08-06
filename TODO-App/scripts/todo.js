let todoItems = ["Find bag", "Get Dressed","Bring Flowers"];
let doneItems = ["Buy Mangoes", "Buy Litchi"];
refresh();

function addTask() {
    let task = document.getElementById("taskInput");
    if (task.value != "") {
        todoItems.push(task.value);
    } else {
        alert("Please enter a task to add.");
    }
    task.value = "";
    refresh();
}

function refresh() {
    let todoElement = document.getElementById("todoItems");
    todoElement.innerHTML = "";
    // for (let i = 0; i < todoItem.length; i++) {
    //     const element = todoItem[i];
    //     todoElement.innerHTML += "<li>" + element + "</li>";
    // }
    todoItems.forEach((todoItem, index) => {
        todoElement.innerHTML = todoElement.innerHTML + `<li class="item" onclick="moveToDone(${index})"><div title="Click to move to done">${todoItem}</div><div title="Click to remove" class="crossButton" onclick='removeFromDo(${index})'>X</div></li>`;
    });

    let doneElement = document.getElementById("doneItems");
    doneElement.innerHTML = "";

    doneItems.forEach((doneItem, index) => {
        doneElement.innerHTML += `<li class="item" onclick="moveToDo(${index})"><div title="Click to move to do">` + doneItem + `</div><div title="Click to remove" class="crossButton" onclick='removeFromDone(${index})'>X</div></li>`;
    });
}

function moveToDo(id) {
    let newList = [];
    doneItems.forEach((doneItem, index) => {
        if (index != id) {
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
    todoItems.forEach((todoItem, index) => {
        if (index != id) {
            newList.push(todoItem);
        } else {
            doneItems.push(todoItem);
        }
    });
    todoItems = newList;
    refresh();
}

function removeFromDo(id) {
    let newList = [];
    todoItems.forEach((todoItem, index) => {
        if (index != id) {
            newList.push(todoItem);
        }
    });
    todoItems = newList;
    refresh();
}

function removeFromDone(id) {
    let newList = [];
    doneItems.forEach((doneItem, index) => {
        if (index != id) {
            newList.push(doneItem);
        }
    });
    doneItems = newList;
    refresh();
}