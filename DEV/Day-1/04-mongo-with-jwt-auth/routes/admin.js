const { Router } = require("express");
const adminMiddleware = require("../middleware/admin");
const router = Router();
const {Admin, Course,User} = require("../db/index");
const {secret_key} = require("../config");
const jwt = require("jsonwebtoken");

// Admin Routes
router.post('/signup', (req, res) => {
    // Implement admin signup logic
       const username = req.body.username;
       const password = req.body.password;

       Admin.create({
        username :username,
        password : password
       });
       res.json({
        msg : "Admin created succesfully"
       });


});

router.post('/signin', async (req, res) => {
    // Implement admin signup logic
    const username = req.body.username;
    const password = req.body.password;

    const user = await User.find({
        username:username,
        password:password
    });

    if(user)
    {
    const decode = jwt.sign({
        username:username
    },secret_key);
    

    res.json({
        token : decode
    });
}
else
{
    res.status(404).json({
        msg : "user not found"
    });
}

});

router.post('/courses', adminMiddleware, async(req, res) => {
    // Implement course creation logic
    const title = req.body.title;
    const description = req.body.description;
    const imageLink = req.body.imageLink;
    const price = req.body.price;

    const course = await Course.create({
        title,
        description,
        imageLink,
        price
    });
    res.json({
        msg : "course created succesfully",
        courseId : course._id
    });
});

router.get('/courses', adminMiddleware, async (req, res) => {
    // Implement fetching all courses logic
    const course = await Course.find({});
    res.json({
        courses : course
    })
});

module.exports = router;