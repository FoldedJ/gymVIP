-- MySQL dump 10.13  Distrib 8.0.40, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: gymvip
-- ------------------------------------------------------
-- Server version	8.0.40

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Temporary view structure for view `class_reservation_statistics`
--

DROP TABLE IF EXISTS `class_reservation_statistics`;
/*!50001 DROP VIEW IF EXISTS `class_reservation_statistics`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `class_reservation_statistics` AS SELECT 
 1 AS `class_name`,
 1 AS `reserved_count`,
 1 AS `class_capacity`*/;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `classes`
--

DROP TABLE IF EXISTS `classes`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `classes` (
  `class_id` int NOT NULL AUTO_INCREMENT COMMENT '课程ID，自动递增主键',
  `class_name` varchar(50) NOT NULL COMMENT '课程名称，如瑜伽、动感单车等',
  `class_description` text COMMENT '课程描述',
  `class_level` varchar(20) DEFAULT NULL COMMENT '课程难度级别（初级、中级、高级）',
  `class_duration` int DEFAULT NULL COMMENT '课程时长（分钟）',
  `class_capacity` int NOT NULL COMMENT '课程容量，即最多可容纳的会员人数',
  `trainer_id` int DEFAULT NULL COMMENT '授课教练ID，关联到教练表',
  `start_time` time NOT NULL COMMENT '课程开始时间',
  `end_time` time NOT NULL COMMENT '课程结束时间',
  `class_date` date NOT NULL COMMENT '课程日期',
  PRIMARY KEY (`class_id`),
  KEY `idx_classes_name` (`class_name`),
  KEY `idx_classes_start_time` (`start_time`),
  KEY `idx_classes_trainer_id` (`trainer_id`),
  CONSTRAINT `classes_ibfk_1` FOREIGN KEY (`trainer_id`) REFERENCES `trainers` (`trainer_id`)
) ENGINE=InnoDB AUTO_INCREMENT=28 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci COMMENT='课程表';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `classes`
--

LOCK TABLES `classes` WRITE;
/*!40000 ALTER TABLE `classes` DISABLE KEYS */;
/*!40000 ALTER TABLE `classes` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary view structure for view `expiring_members`
--

DROP TABLE IF EXISTS `expiring_members`;
/*!50001 DROP VIEW IF EXISTS `expiring_members`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `expiring_members` AS SELECT 
 1 AS `name`,
 1 AS `membership_type`,
 1 AS `membership_end_date`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary view structure for view `member_account_info`
--

DROP TABLE IF EXISTS `member_account_info`;
/*!50001 DROP VIEW IF EXISTS `member_account_info`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `member_account_info` AS SELECT 
 1 AS `name`,
 1 AS `membership_type`,
 1 AS `membership_start_date`,
 1 AS `membership_end_date`,
 1 AS `account_balance`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary view structure for view `member_reservation_details`
--

DROP TABLE IF EXISTS `member_reservation_details`;
/*!50001 DROP VIEW IF EXISTS `member_reservation_details`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `member_reservation_details` AS SELECT 
 1 AS `member_name`,
 1 AS `class_name`,
 1 AS `start_time`,
 1 AS `end_time`,
 1 AS `class_date`,
 1 AS `trainer_name`,
 1 AS `is_attended`,
 1 AS `is_cancelled`*/;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `members`
--

DROP TABLE IF EXISTS `members`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `members` (
  `member_id` int NOT NULL AUTO_INCREMENT COMMENT '会员ID，自动递增主键',
  `name` varchar(100) NOT NULL,
  `gender` enum('Male','Female','Other') NOT NULL COMMENT '性别',
  `birth_date` date DEFAULT NULL COMMENT '出生日期',
  `contact_number` varchar(15) DEFAULT NULL COMMENT '联系电话',
  `email` varchar(100) NOT NULL,
  `address` varchar(200) DEFAULT NULL COMMENT '地址',
  `membership_type` varchar(20) NOT NULL COMMENT '会员类型，如年卡、季卡、月卡等',
  `membership_start_date` date NOT NULL COMMENT '会员有效期起始日期',
  `membership_end_date` date DEFAULT NULL COMMENT '会员有效期截止日期',
  `account_balance` decimal(10,2) DEFAULT '0.00' COMMENT '会员账户余额，默认值为0.00',
  `password` varchar(50) NOT NULL,
  PRIMARY KEY (`member_id`),
  UNIQUE KEY `email` (`email`)
) ENGINE=InnoDB AUTO_INCREMENT=24 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci COMMENT='会员表';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `members`
--

LOCK TABLES `members` WRITE;
/*!40000 ALTER TABLE `members` DISABLE KEYS */;
/*!40000 ALTER TABLE `members` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `trg_insert_member` BEFORE INSERT ON `members` FOR EACH ROW BEGIN
    -- 设置会员起始日期为当前时间
    SET NEW.membership_start_date = NOW();

    -- 根据会员类型计算会员截止日期
    CASE NEW.membership_type
        WHEN '月卡' THEN
            SET NEW.membership_end_date = DATE_ADD(NEW.membership_start_date, INTERVAL 1 MONTH);
            SET NEW.account_balance = 200;
        WHEN '季卡' THEN
            SET NEW.membership_end_date = DATE_ADD(NEW.membership_start_date, INTERVAL 3 MONTH);
            SET NEW.account_balance = 500;
        WHEN '年卡' THEN
            SET NEW.membership_end_date = DATE_ADD(NEW.membership_start_date, INTERVAL 1 YEAR);
            SET NEW.account_balance = 1000;
        ELSE
            -- 处理其他情况，这里可以根据实际需求设置默认值或抛出错误等
            SET NEW.membership_end_date = NEW.membership_start_date;
            SET NEW.account_balance = 0; -- 这里假设其他情况设置为0，你可以按需调整
        END CASE;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `payment_records`
--

DROP TABLE IF EXISTS `payment_records`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `payment_records` (
  `payment_id` int NOT NULL AUTO_INCREMENT COMMENT '缴费记录ID，自动递增主键',
  `member_id` int NOT NULL COMMENT '缴费会员的ID，关联到会员表',
  `payment_amount` decimal(10,2) NOT NULL COMMENT '缴费金额',
  `payment_date` timestamp NULL DEFAULT CURRENT_TIMESTAMP COMMENT '缴费日期，默认值为当前时间',
  `payment_method` varchar(20) DEFAULT NULL COMMENT '缴费方式，如微信、支付宝、现金等',
  `membership_period_start` date DEFAULT NULL COMMENT '本次缴费对应的会员有效期起始时间',
  `membership_period_end` date DEFAULT NULL COMMENT '本次缴费对应的会员有效期截止时间',
  PRIMARY KEY (`payment_id`),
  KEY `idx_payment_records_member_id` (`member_id`),
  KEY `idx_payment_records_date` (`payment_date`),
  CONSTRAINT `payment_records_ibfk_1` FOREIGN KEY (`member_id`) REFERENCES `members` (`member_id`)
) ENGINE=InnoDB AUTO_INCREMENT=29 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci COMMENT='缴费记录表';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `payment_records`
--

LOCK TABLES `payment_records` WRITE;
/*!40000 ALTER TABLE `payment_records` DISABLE KEYS */;
/*!40000 ALTER TABLE `payment_records` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `trg_update_payment_records` AFTER INSERT ON `payment_records` FOR EACH ROW BEGIN
    DECLARE v_membership_type VARCHAR(20);
    DECLARE v_extend_days INT;

    -- 根据缴费金额确定会员类型和延长的有效期天数
    IF NEW.payment_amount = 200 THEN
        SET v_membership_type = '月卡';
        SET v_extend_days = 30;
    ELSEIF NEW.payment_amount = 500 THEN
        SET v_membership_type = '季卡';
        SET v_extend_days = 90;
    ELSEIF NEW.payment_amount = 1000 THEN
        SET v_membership_type = '年卡';
        SET v_extend_days = 365;
    ELSEIF NEW.payment_amount % 1000 = 0 THEN
        SET v_membership_type = '年卡';
        SET v_extend_days = NEW.payment_amount / 1000 * 365;
    END IF;

    -- 更新会员账户余额
    UPDATE members
    SET account_balance = account_balance + NEW.payment_amount
    WHERE member_id = NEW.member_id;

    -- 更新会员有效期和会员类型
    UPDATE members
    SET membership_end_date = DATE_ADD(COALESCE(membership_end_date, CURRENT_DATE), INTERVAL v_extend_days DAY),
        membership_type = v_membership_type
    WHERE member_id = NEW.member_id;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `reservations`
--

DROP TABLE IF EXISTS `reservations`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `reservations` (
  `reservation_id` int NOT NULL AUTO_INCREMENT COMMENT '预约记录ID，自动递增主键',
  `member_id` int NOT NULL COMMENT '预约会员的ID，关联到会员表',
  `class_id` int NOT NULL COMMENT '预约课程的ID，关联到课程表',
  `reservation_date` timestamp NULL DEFAULT CURRENT_TIMESTAMP COMMENT '预约时间，默认值为当前时间',
  `is_attended` tinyint(1) DEFAULT '0' COMMENT '是否实际参加课程，初始为False',
  `is_cancelled` tinyint(1) DEFAULT '0' COMMENT '是否已取消预约，初始为False',
  PRIMARY KEY (`reservation_id`),
  KEY `idx_reservations_member_id` (`member_id`),
  KEY `idx_reservations_class_id` (`class_id`),
  KEY `idx_reservations_date` (`reservation_date`),
  CONSTRAINT `reservations_ibfk_1` FOREIGN KEY (`member_id`) REFERENCES `members` (`member_id`),
  CONSTRAINT `reservations_ibfk_2` FOREIGN KEY (`class_id`) REFERENCES `classes` (`class_id`)
) ENGINE=InnoDB AUTO_INCREMENT=73 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci COMMENT='会员课程预约表';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `reservations`
--

LOCK TABLES `reservations` WRITE;
/*!40000 ALTER TABLE `reservations` DISABLE KEYS */;
/*!40000 ALTER TABLE `reservations` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `trg_insert_reservation` AFTER INSERT ON `reservations` FOR EACH ROW BEGIN
    -- 更新 classes 表中对应课程的容量，减去 1
    UPDATE classes
    SET class_capacity = class_capacity - 1
    WHERE class_id = NEW.class_id;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `trg_cancel_reservation` AFTER UPDATE ON `reservations` FOR EACH ROW BEGIN
    IF NEW.is_cancelled = 1 AND OLD.is_cancelled = 0 THEN
        -- 更新 classes 表中对应课程的容量，加上 1
        UPDATE classes
        SET class_capacity = class_capacity + 1
        WHERE class_id = NEW.class_id;
    END IF;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Temporary view structure for view `trainer_class_schedule`
--

DROP TABLE IF EXISTS `trainer_class_schedule`;
/*!50001 DROP VIEW IF EXISTS `trainer_class_schedule`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `trainer_class_schedule` AS SELECT 
 1 AS `trainer_name`,
 1 AS `class_name`,
 1 AS `class_date`,
 1 AS `start_time`,
 1 AS `end_time`,
 1 AS `class_capacity`*/;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `trainers`
--

DROP TABLE IF EXISTS `trainers`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `trainers` (
  `trainer_id` int NOT NULL AUTO_INCREMENT COMMENT '教练ID，自动递增主键',
  `name` varchar(100) NOT NULL COMMENT '教练姓名',
  `gender` enum('Male','Female','Other') NOT NULL COMMENT '性别',
  `contact_number` varchar(15) DEFAULT NULL COMMENT '联系电话',
  `email` varchar(100) DEFAULT NULL COMMENT '邮箱，唯一标识',
  `specialty` varchar(100) DEFAULT NULL COMMENT '擅长的训练项目',
  `qualification` varchar(100) DEFAULT NULL COMMENT '专业资质证书相关信息',
  `hire_date` date DEFAULT NULL COMMENT '入职日期',
  `work_schedule` text COMMENT '工作排班信息',
  `password` varchar(50) NOT NULL,
  PRIMARY KEY (`trainer_id`),
  UNIQUE KEY `email` (`email`)
) ENGINE=InnoDB AUTO_INCREMENT=12 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci COMMENT='教练表';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `trainers`
--

LOCK TABLES `trainers` WRITE;
/*!40000 ALTER TABLE `trainers` DISABLE KEYS */;
/*!40000 ALTER TABLE `trainers` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Final view structure for view `class_reservation_statistics`
--

/*!50001 DROP VIEW IF EXISTS `class_reservation_statistics`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_0900_ai_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `class_reservation_statistics` AS select `c`.`class_name` AS `class_name`,count(`r`.`reservation_id`) AS `reserved_count`,`c`.`class_capacity` AS `class_capacity` from (`classes` `c` left join `reservations` `r` on((`c`.`class_id` = `r`.`class_id`))) group by `c`.`class_name`,`c`.`class_capacity` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `expiring_members`
--

/*!50001 DROP VIEW IF EXISTS `expiring_members`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_0900_ai_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `expiring_members` AS select `m`.`name` AS `name`,`m`.`membership_type` AS `membership_type`,`m`.`membership_end_date` AS `membership_end_date` from `members` `m` where ((to_days(`m`.`membership_end_date`) - to_days(curdate())) <= 7) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `member_account_info`
--

/*!50001 DROP VIEW IF EXISTS `member_account_info`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_0900_ai_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `member_account_info` AS select `m`.`name` AS `name`,`m`.`membership_type` AS `membership_type`,`m`.`membership_start_date` AS `membership_start_date`,`m`.`membership_end_date` AS `membership_end_date`,`m`.`account_balance` AS `account_balance` from `members` `m` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `member_reservation_details`
--

/*!50001 DROP VIEW IF EXISTS `member_reservation_details`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_0900_ai_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `member_reservation_details` AS select `m`.`name` AS `member_name`,`c`.`class_name` AS `class_name`,`c`.`start_time` AS `start_time`,`c`.`end_time` AS `end_time`,`c`.`class_date` AS `class_date`,`t`.`name` AS `trainer_name`,`r`.`is_attended` AS `is_attended`,`r`.`is_cancelled` AS `is_cancelled` from (((`reservations` `r` join `members` `m` on((`r`.`member_id` = `m`.`member_id`))) join `classes` `c` on((`r`.`class_id` = `c`.`class_id`))) join `trainers` `t` on((`c`.`trainer_id` = `t`.`trainer_id`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `trainer_class_schedule`
--

/*!50001 DROP VIEW IF EXISTS `trainer_class_schedule`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_0900_ai_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `trainer_class_schedule` AS select `t`.`name` AS `trainer_name`,`c`.`class_name` AS `class_name`,`c`.`class_date` AS `class_date`,`c`.`start_time` AS `start_time`,`c`.`end_time` AS `end_time`,`c`.`class_capacity` AS `class_capacity` from (`classes` `c` join `trainers` `t` on((`c`.`trainer_id` = `t`.`trainer_id`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2025-01-05 14:16:01
