
function showSignIn() {
    document.getElementById('auth-modal').style.display = 'block';
    document.getElementById('sign-in-form').style.display = 'block';
    document.getElementById('sign-up-form').style.display = 'none';
}

function showSignUp() {
    document.getElementById('auth-modal').style.display = 'block';
    document.getElementById('sign-in-form').style.display = 'none';
    document.getElementById('sign-up-form').style.display = 'block';
}

function closeModal() {
    document.getElementById('auth-modal').style.display = 'none';
}

document.addEventListener('click', function (event) {
    if (event.target == document.getElementById('auth-modal')) {
        closeModal();
    }
});

document.querySelectorAll('.sidebar a').forEach(link => {
    link.addEventListener('click', function () {
        document.querySelectorAll('.sidebar a').forEach(link => link.classList.remove('active'));
        this.classList.add('active');
        document.querySelectorAll('.sub-menu').forEach(menu => menu.style.display = 'none');
        if (this.nextElementSibling && this.nextElementSibling.classList.contains('sub-menu')) {
            this.nextElementSibling.style.display = 'flex';
        }
    });
});

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
