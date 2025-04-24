
count = 0
function change(){
    document.getElementById("img").src = images[count]
    if(count === 2){
        count = 0
    }else{
        count += 1
    }
 
}

function highlight(){
    document.getElementById("btn").style.backgroundColor = "orange"
    document.getElementById("btn").style.color= "white"

}
function normal(){
    document.getElementById("btn").style.backgroundColor = "gray"
    document.getElementById("btn").style.color= "black"

}
function push(){
        document.getElementById("btn").style.backgroundColor = "red"
    document.getElementById("btn").style.color= "purple"
}
