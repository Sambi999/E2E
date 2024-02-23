using Microsoft.Playwright;

//playwright startup  //using means for localiazed instance
using var playwright = await Playwright.CreateAsync();

//launch broswer
await using var browser = await playwright.Chromium.LaunchAsync();

//page instance
var context = await browser.NewContextAsync();
var page = await context.NewPageAsync();

Console.WriteLine("Opened Browser");
await page.GotoAsync("https://www.google.com");
Console.WriteLine("Page Loaded");
