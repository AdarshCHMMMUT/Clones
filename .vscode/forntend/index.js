import figlet from "figlet";

figlet ("Saurabh Bansal", function (err,data)
{
  if(err)
    {
        console.log("something went wrong...");
        console.dir(err);
        return;
    }
    console.log(data);
}
);