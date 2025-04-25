
let count = 0
const images = [
        "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQG7z6Y1JwkH_sMDJWSuT0U5G6OWjnedteo2w&s",
        "https://image.petmd.com/files/styles/978x550/public/2023-03/pit-bull.jpg",
        "https://cdn.shopify.com/s/files/1/0568/0450/7691/files/Newfoundland_2_600x600.jpg?v=1723825120"
]
function change(){
    document.getElementById("img").src = images[count]
    if(count === 2){
        count = 0
    }else{
        count += 1
    }
 
}

function highlight(){
    document.getElementById("btn").style.backgroundColor = "purple"
    document.getElementById("btn").style.color= "yellow"

}
function normal(){
    document.getElementById("btn").style.backgroundColor = "blue"
    document.getElementById("btn").style.color= "gray"

}
function push(){
        document.getElementById("btn").style.backgroundColor = "orange"
    document.getElementById("btn").style.color= "green"
    document.getElementById("btn").style.transform= "scale(0.95)"
}
function show(){
    document.getElementById("hidden").style.display = "block"
}
function pop(){
    window.alert("False alarm! This button is fake!")}
