function more(){
    if(document.getElementById("extra").style.display != "flex"){
    document.getElementById("extra").style.display= "flex"
    document.getElementById("show").innerHTML= "Show less"
}else{
        document.getElementById("extra").style.display= "none"
    document.getElementById("show").innerHTML= "Show more"
    
}}
let count = 0
const images = [
        "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQO7RifYZ7z-1go-Q4xJOse-BNdR0bC0je-DA&s",
        "https://artisanadornments.wordpress.com/wp-content/uploads/2013/05/015.jpg",
        "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSU9wDNSCye6Wvunzc3cMWMzSm7Qhix7pV_wA&s"
]
function change(){
    document.getElementById("img").src = images[count]
    if(count === 2){
        count = 0
    }else{
        count += 1
    } 
 
}
function change(){
    document.getElementById("img").src = images[count]
    if(count === images.length-1){
        count = 0
    }else{
        count += 1
    }

}
function show(){
    document.getElementById("hidden").style.display = "block"
}