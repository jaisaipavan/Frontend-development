let modebtn = document.querySelector("#mode");
let body = document.querySelector("body");
let currmode = "light"; 

modebtn.addEventListener("click", () => {
  if(currmode === "light") {
    currmode = "dark";
    body.classList.add("dark");
    body.classList.remove("light");
  } 
  else{
    currmode = "light";
  body.classList.add("light");
  //or
  document.querySelector("body").style.backgroundColor = "light";
    body.classList.remove("dark");
}
  console.log(currmode);
});

