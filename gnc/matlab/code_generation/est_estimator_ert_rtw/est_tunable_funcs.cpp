// Autogenerated file, see write_tunable_param_functions for details

#include "est_tunable_funcs.h"
#include <config_reader/config_reader.h>
#include <ros/console.h>
#include <msg_conversions/msg_conversions.h>

// Do config setup and add includes
void est_ReadParams(config_reader::ConfigReader* config,  RT_MODEL_est_estimator_T* est) {

  auto & p = est->defaultParam;

  if (!msg_conversions::config_read_array(config, "tun_abp_p_dockcam_imu_est", 3 , p->tun_abp_p_dockcam_imu_est))
    ROS_FATAL("Unspecified tun_abp_p_dockcam_imu_est.");
  if (!msg_conversions::config_read_array(config, "tun_abp_p_imu_body_body", 3 , p->tun_abp_p_imu_body_body))
    ROS_FATAL("Unspecified tun_abp_p_imu_body_body.");
  if (!msg_conversions::config_read_array(config, "tun_abp_p_navcam_imu_est", 3 , p->tun_abp_p_navcam_imu_est))
    ROS_FATAL("Unspecified tun_abp_p_navcam_imu_est.");
  if (!msg_conversions::config_read_array(config, "tun_abp_p_perchcam_imu_est", 3 , p->tun_abp_p_perchcam_imu_est))
    ROS_FATAL("Unspecified tun_abp_p_perchcam_imu_est.");
  if (!msg_conversions::config_read_array(config, "tun_abp_q_body2dockcam", 4 , p->tun_abp_q_body2dockcam))
    ROS_FATAL("Unspecified tun_abp_q_body2dockcam.");
  if (!msg_conversions::config_read_array(config, "tun_abp_q_body2navcam", 4 , p->tun_abp_q_body2navcam))
    ROS_FATAL("Unspecified tun_abp_q_body2navcam.");
  if (!msg_conversions::config_read_array(config, "tun_abp_q_body2perchcam", 4 , p->tun_abp_q_body2perchcam))
    ROS_FATAL("Unspecified tun_abp_q_body2perchcam.");
  if (!msg_conversions::config_read_array(config, "tun_abp_quat_body2imu", 4 , p->tun_abp_quat_body2imu))
    ROS_FATAL("Unspecified tun_abp_quat_body2imu.");
  if (!msg_conversions::config_read_array(config, "tun_ase_Q_imu", 12 , p->tun_ase_Q_imu))
    ROS_FATAL("Unspecified tun_ase_Q_imu.");
  if (!config->GetReal("tun_ase_acquired_ticks", &p->tun_ase_acquired_ticks))
    ROS_FATAL("Unspecified tun_ase_acquired_ticks.");
  if (!config->GetReal("tun_ase_converged_thresh", &p->tun_ase_converged_thresh))
    ROS_FATAL("Unspecified tun_ase_converged_thresh.");
  if (!config->GetReal("tun_ase_diverged_thresh", &p->tun_ase_diverged_thresh))
    ROS_FATAL("Unspecified tun_ase_diverged_thresh.");
  if (!config->GetReal("tun_ase_dock_r_mag", &p->tun_ase_dock_r_mag))
    ROS_FATAL("Unspecified tun_ase_dock_r_mag.");
  if (!config->GetReal("tun_ase_dockcam_distortion", &p->tun_ase_dockcam_distortion))
    ROS_FATAL("Unspecified tun_ase_dockcam_distortion.");
  if (!config->GetReal("tun_ase_dockcam_inv_focal_length", &p->tun_ase_dockcam_inv_focal_length))
    ROS_FATAL("Unspecified tun_ase_dockcam_inv_focal_length.");
  if (!msg_conversions::config_read_array(config, "tun_ase_gravity_accel", 3 , p->tun_ase_gravity_accel))
    ROS_FATAL("Unspecified tun_ase_gravity_accel.");
  if (!config->GetReal("tun_ase_mahal_distance_max", &p->tun_ase_mahal_distance_max))
    ROS_FATAL("Unspecified tun_ase_mahal_distance_max.");
  if (!config->GetReal("tun_ase_map_error", &p->tun_ase_map_error))
    ROS_FATAL("Unspecified tun_ase_map_error.");
  if (!config->GetReal("tun_ase_max_accel", &p->tun_ase_max_accel))
    ROS_FATAL("Unspecified tun_ase_max_accel.");
  if (!config->GetReal("tun_ase_max_gyro", &p->tun_ase_max_gyro))
    ROS_FATAL("Unspecified tun_ase_max_gyro.");
  if (!config->GetReal("tun_ase_min_ml_meas", &p->tun_ase_min_ml_meas))
    ROS_FATAL("Unspecified tun_ase_min_ml_meas.");
  if (!config->GetReal("tun_ase_ml_forward_projection_time", &p->tun_ase_ml_forward_projection_time))
    ROS_FATAL("Unspecified tun_ase_ml_forward_projection_time.");
  if (!config->GetReal("tun_ase_navcam_distortion", &p->tun_ase_navcam_distortion))
    ROS_FATAL("Unspecified tun_ase_navcam_distortion.");
  if (!config->GetReal("tun_ase_navcam_inv_focal_length", &p->tun_ase_navcam_inv_focal_length))
    ROS_FATAL("Unspecified tun_ase_navcam_inv_focal_length.");
  if (!config->GetReal("tun_ase_of_r_mag", &p->tun_ase_of_r_mag))
    ROS_FATAL("Unspecified tun_ase_of_r_mag.");
  if (!config->GetReal("tun_ase_q_saturated_accel", &p->tun_ase_q_saturated_accel))
    ROS_FATAL("Unspecified tun_ase_q_saturated_accel.");
  if (!config->GetReal("tun_ase_q_saturated_gyro", &p->tun_ase_q_saturated_gyro))
    ROS_FATAL("Unspecified tun_ase_q_saturated_gyro.");
  if (!msg_conversions::config_read_array(config, "tun_ase_state_ic_P_B_ISS_ISS", 3 , p->tun_ase_state_ic_P_B_ISS_ISS))
    ROS_FATAL("Unspecified tun_ase_state_ic_P_B_ISS_ISS.");
  if (!msg_conversions::config_read_array(config, "tun_ase_state_ic_P_EST_ISS_ISS", 3 , p->tun_ase_state_ic_P_EST_ISS_ISS))
    ROS_FATAL("Unspecified tun_ase_state_ic_P_EST_ISS_ISS.");
  if (!msg_conversions::config_read_array(config, "tun_ase_state_ic_V_B_ISS_ISS", 3 , p->tun_ase_state_ic_V_B_ISS_ISS))
    ROS_FATAL("Unspecified tun_ase_state_ic_V_B_ISS_ISS.");
  if (!msg_conversions::config_read_array(config, "tun_ase_state_ic_omega_B_ISS_B", 3 , p->tun_ase_state_ic_omega_B_ISS_B))
    ROS_FATAL("Unspecified tun_ase_state_ic_omega_B_ISS_B.");
  if (!msg_conversions::config_read_array(config, "tun_ase_state_ic_quat_ISS2B", 4 , p->tun_ase_state_ic_quat_ISS2B))
    ROS_FATAL("Unspecified tun_ase_state_ic_quat_ISS2B.");
  if (!config->GetReal("tun_ase_vis_r_mag", &p->tun_ase_vis_r_mag))
    ROS_FATAL("Unspecified tun_ase_vis_r_mag.");
  if (!config->GetReal("tun_ase_vocam_inv_focal_length", &p->tun_ase_vocam_inv_focal_length))
    ROS_FATAL("Unspecified tun_ase_vocam_inv_focal_length.");
  if (!msg_conversions::config_read_array(config, "tun_grav_hp_den", 2 , p->tun_grav_hp_den))
    ROS_FATAL("Unspecified tun_grav_hp_den.");
  if (!msg_conversions::config_read_array(config, "tun_grav_hp_num", 2 , p->tun_grav_hp_num))
    ROS_FATAL("Unspecified tun_grav_hp_num.");
  if (!config->GetReal("tun_ic_cov_pos", &p->tun_ic_cov_pos))
    ROS_FATAL("Unspecified tun_ic_cov_pos.");
  if (!config->GetReal("tun_ic_cov_quat", &p->tun_ic_cov_quat))
    ROS_FATAL("Unspecified tun_ic_cov_quat.");
  bool ase_enable_of;
  if (!config->GetBool("tun_ase_enable_of", &ase_enable_of))
  ROS_FATAL("Unspecified tun_ase_enable_of.");
  p->tun_ase_enable_of = ase_enable_of;
  bool ase_gravity_removal;
  if (!config->GetBool("tun_ase_gravity_removal", &ase_gravity_removal))
  ROS_FATAL("Unspecified tun_ase_gravity_removal.");
  p->tun_ase_gravity_removal = ase_gravity_removal;
  bool grav_hp_enable_f;
  if (!config->GetBool("tun_grav_hp_enable_f", &grav_hp_enable_f))
  ROS_FATAL("Unspecified tun_grav_hp_enable_f.");
  p->tun_grav_hp_enable_f = grav_hp_enable_f;
}
