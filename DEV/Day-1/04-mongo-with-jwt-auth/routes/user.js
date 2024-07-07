const { Router } = require("express");
const router = Router();
const userMiddleware = require("../middleware/user");
const { User } = require("../db");
const {secret_key} = require("../config");
const jwt = require("jsonwebtoken");

// User Routes
router.post('/signup', (req, res) => {
    // Implement user signup logic
    const username = req.body.username;
    const password = req.body.password;

    User.create({
        username:username,
        password:password
    })
    res.json({
        msg : "user created succesfully"
    });
});

router.post('/signin', async(req, res) => {
    // Implement admin signup logic
     const user = await User.find({
        username:username,
        password:password
     });


});

router.get('/courses', (req, res) => {
    // Implement listing all courses logic
});

router.post('/courses/:courseId', userMiddleware, (req, res) => {
    // Implement course purchase logic
});

router.get('/purchasedCourses', userMiddleware, (req, res) => {
    // Implement fetching purchased courses logic
});

module.exports = router