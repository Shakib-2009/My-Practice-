var inpt = document.getElementById("input")
 

function result(num)
{
    inpt.value +=num
}
function dlt()
{
    inpt.value = ""
}

function calculate()
{
    try {
        inpt.value = eval(inpt.value)

    } catch (error) {
        alert("Invalid")        
    }    
}

function clearontime()
{
    inpt.value = inpt.value.slice(0,-1)
}

