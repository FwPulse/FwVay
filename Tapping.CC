_G.Version = "Tapping.CC" -- // Dont change
Key = "123EuleonTappin"

getgenv().Tapping.CC = { 
    Global = {
        Intro = true,
        MouseArg = "UpdateMousePos",
        Remote = game:GetService("ReplicatedStorage").MainEvent,
        SafteyMeasures = {
            Resolver = true,
            Anti_Aim_Viewer = true,
        },
    },
    ["SilentAim"] = {
        Enabled = true,
        UseKeybind = false,
        HitChance = 100,
        Keybind = "L",
        TargetMode = "FOV", -- FOV, Target
        DefaultPrediction = 0.14224646,
        PredictionType = "Defult", -- Default, Vector3
        PredictionX = 0.1144334312,
        PredictionY = 0.101214113,
        PredictionZ = 0.1149354135,
        HitPart = "HumanoidRootPart",
        HitPartMode = "Default", -- Nearest Part, Nearest Point, Default
        AirShotHitChance = 100,
        AirFOV = false,
        AirFOVRadius = 200,
    },
    ["Camlock"] = {
        Enabled = true,
        LockKey = "Q",
        TargetMode = "Camera", -- Mouse, Camera
        HitPart = "HumanoidRootPart",
        HitPartMode = "Default", -- "Default", "Nearest Part"
        DefaultPrediction = 0.127512934,
        PredictionType = "Vector3",
        PredictionX = 0.125358125312,
        PredictionY = 0.101102340,
        PredictionZ = 0.144125360,
        CameraSmoothnessX = 0.075,
        CameraSmoothnessY = 0.075,
        CameraSpeedX = 0.850,
        CameraSpeedY = 0.050,
        MouseSmoothnessX = 0.15,
        MouseSmoothnessY = 0.15,
        MouseSpeedX = 0.6,
        MouseSpeedY = 0.9,
        Settings = {
            CalculateVelocity = false,
            IntersectionalMovement = false,
            UseFOV = false,
            UseDeadzone = false,
        },
        Triggerbot = {
            Enabled = false,
            UseKeybind = false,
            Keybind = "P",
            Prediction = 0.125,
            TargetMode = "Predictor", -- Legit, Blatant, Predictor
            CamlockSupport = false,
            ShootPredictor = true,
            MinDelay = 0.20,
            MaxDelay = 0.40,
            WhitelistedParts = {"HumanoidRootPart","UpperTorso","LowerTorso"}    
        }
    },
    ["GlobalSettings"] = {
        Checks = {
            DeadCheck = false,
            GrabbedCheck = false,
            VisibleCheck = false,
            CrewCheck = false,
        },
        Exploits = {
            InstantMacro = true, -- // This macro is op and fast
            InstantMacroKey = "X",
            RejoinServer = false,
            RejoinServerKeybind = "G",
            FindGoodServer = false,
            FindGoodServerKeyBind = "F",
            RemoveStun = true, -- // Removes the fact when you get flung you get stunned at one place and gotta wait a couple seconds to get back up
            RemoveSeats = true,
            Panic = false,
            PanicKey = "P",
            F9Clear = false,
            F9ClearKey = "M",
        },
        Visuals = {
            MiniMap = false,
            OppDetector = false,
            OppDetectorSelect = "R",
            OppDetectorClear = "E",
        },
        Renders = {
            GlobalFOVSettings = {
                Position = "Mouse" -- // Mouse, Center
            },
            SilentAim = {
                Visible = true,
                Color = Color3.new(0.333333, 0.666667, 1),
                Radius = 100,
                StickFOV = false,
            },
            Camlock = {
                Visible = false,
                Color = Color3.new(0.333333, 0.666667, 1),
                Radius = 150,
                Deadzone = {
                    Visible = false,
                    Color = Color3.new(0.333333, 0.666667, 1),
                    Radius = 5,
                }
            },
        },
    }
}

loadstring(game:HttpGet("https://raw.githubusercontent.com/FwPulse/FwVay/main/Tapping.CC ")) ()
