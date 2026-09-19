
    const hamburger = document.getElementById("hamburger"); 
    const navMenu = document.getElementById("nav-menu");
     const navButton = document.querySelector(".nav-button");
     
     hamburger.addEventListener("click", function () {
         navMenu.classList.toggle("active"); navButton.classList.toggle("active");
          });