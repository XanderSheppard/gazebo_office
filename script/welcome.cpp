#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginProject1 : public WorldPlugin
  {
  public:
    // Constructor
    WorldPluginProject1() : WorldPlugin()
    {
      // Print message when the plugin is loaded
      printf("Welcome to World\n");
    }

    // Load function for the plugin
    void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) override
    {
      // This function will be called when the plugin is loaded
      // You can perform any setup tasks here
    }
  };

  // Register the plugin with Gazebo
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginProject1)
}

